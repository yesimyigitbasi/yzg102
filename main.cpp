#include <cstdlib>
#include <iomanip>
#include <iostream>
#include <limits>
#include <string>

using namespace std;

class FoodItem {
   private:
    string name;
    double calories;
    int unitType;  // 1 = kati, 2 = sivi

   public:
    FoodItem() {
        name = "";
        calories = 0;
        unitType = 1;
    }

    FoodItem(string n, double c, int u) {
        name = "";
        calories = 0;
        unitType = 1;
        setName(n);
        setCalories(c);
        setUnitType(u);
    }

    void setName(string n) {
        if (n != "") {
            name = n;
        }
    }

    void setCalories(double c) {
        if (c >= 0) {
            calories = c;
        }
    }

    void setUnitType(int u) {
        if (u == 1 || u == 2) {
            unitType = u;
        }
    }

    string getName() const {
        return name;
    }

    double getCalories() const {
        return calories;
    }

    int getUnitType() const {
        return unitType;
    }

    string getUnitText() const {
        if (unitType == 1) {
            return "100g";
        } else {
            return "100ml";
        }
    }
};

class FoodManager {
   private:
    FoodItem* foods;
    int foodCount;
    int capacity;

   public:
    FoodManager() {
        foodCount = 0;
        capacity = 2;
        foods = new FoodItem[capacity];
    }

    ~FoodManager() {
        delete[] foods;
    }

    int getFoodCount() const {
        return foodCount;
    }

    int getCapacity() const {
        return capacity;
    }

    void resizeArray() {
        int newCapacity = capacity * 2;
        FoodItem* tempFoods = new FoodItem[newCapacity];

        for (int i = 0; i < foodCount; i++) {
            tempFoods[i] = foods[i];
        }

        delete[] foods;
        foods = tempFoods;
        capacity = newCapacity;
    }

    void addFood(FoodItem newFood) {
        if (foodCount == capacity) {
            resizeArray();
        }

        foods[foodCount] = newFood;
        foodCount = foodCount + 1;
    }

    void listFoods() const {
        if (foodCount == 0) {
            cout << "\nListede henuz yemek yok.\n";
            return;
        }

        cout << "\n------ YEMEK LISTESI ------\n";
        cout << left << setw(5) << "No"
             << setw(15) << "Yemek"
             << setw(12) << "Kalori"
             << setw(10) << "Birim" << "\n";
        cout << "------------------------------------------\n";

        for (int i = 0; i < foodCount; i++) {
            cout << left << setw(5) << i + 1
                 << setw(15) << foods[i].getName()
                 << setw(12) << foods[i].getCalories()
                 << setw(10) << foods[i].getUnitText() << "\n";
        }

        cout << "------------------------------------------\n";
    }

    int searchFood(string searchName) const {
        for (int i = 0; i < foodCount; i++) {
            if (foods[i].getName() == searchName) {
                return i;
            }
        }

        return -1;
    }

    FoodItem getFoodAt(int index) const {
        return foods[index];
    }
};

void clearScreen() {
    system("cls");
}

void pauseProgram() {
    string temp;
    cout << "\nDevam etmek icin Enter'a basin...";
    getline(cin, temp);
}

void showMenu(const FoodManager& manager) {
    cout << "\n=============================\n";
    cout << "   BESLENME TAKIP SISTEMI\n";
    cout << "=============================\n";
    cout << "1. Yeni yemek ekle\n";
    cout << "2. Tum yemekleri listele\n";
    cout << "3. Yemek ara\n";
    cout << "4. Cikis\n";
    cout << "=============================\n";
    cout << "Kayitli yemek sayisi: " << manager.getFoodCount() << "\n";
    cout << "Dizi kapasitesi: " << manager.getCapacity() << "\n";
    cout << "Seciminiz: ";
}

void addFoodMenu(FoodManager& manager) {
    string name;
    double calories;
    int unitType;

    cout << "\nYemek adi: ";
    getline(cin, name);

    while (name == "") {
        cout << "Yemek adi bos olamaz.\n";
        cout << "Yemek adi: ";
        getline(cin, name);
    }

    cout << "Kalori degeri girin: ";
    cin >> calories;

    while (cin.fail() || calories < 0) {
        cout << "Hatali giris. Tekrar deneyin: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> calories;
    }

    cout << "Tur secin (1 = Kati, 2 = Sivi): ";
    cin >> unitType;

    while (cin.fail() || (unitType != 1 && unitType != 2)) {
        cout << "Hatali giris. 1 veya 2 girin: ";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cin >> unitType;
    }

    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    FoodItem newFood(name, calories, unitType);
    manager.addFood(newFood);

    cout << "\nYemek eklendi.\n";
}

void searchFoodMenu(const FoodManager& manager) {
    if (manager.getFoodCount() == 0) {
        cout << "\nArama yapilamadi. Listede yemek yok.\n";
        return;
    }

    string searchName;
    cout << "\nAranacak yemek adi: ";
    getline(cin, searchName);

    int index = manager.searchFood(searchName);

    if (index == -1) {
        cout << "\nBu isimde yemek bulunamadi.\n";
    } else {
        FoodItem foundFood = manager.getFoodAt(index);

        cout << "\nYemek bulundu.\n";
        cout << "Adi: " << foundFood.getName() << "\n";
        cout << "Kalori: " << foundFood.getCalories() << "\n";
        cout << "Birim: " << foundFood.getUnitText() << "\n";
    }
}

int main() {
    FoodManager manager;
    int choice;
    bool firstTime = true;

    do {
        if (firstTime == false) {
            clearScreen();
        }

        showMenu(manager);
        cin >> choice;

        if (cin.fail()) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            choice = 0;
        } else {
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        switch (choice) {
            case 1:
                addFoodMenu(manager);
                break;
            case 2:
                manager.listFoods();
                break;
            case 3:
                searchFoodMenu(manager);
                break;
            case 4:
                cout << "\nProgram kapatiliyor...\n";
                break;
            default:
                cout << "\nGecersiz secim yaptiniz.\n";
                break;
        }

        if (choice != 4) {
            pauseProgram();
        }

        firstTime = false;

    } while (choice != 4);

    return 0;
}
