# Beslenme Takip Sistemi

Program kullanıcıdan yemek bilgileri alır, bu verileri nesneler halinde saklar ve menülü bir yapı ile yönetir.

## Program ne yapıyor?

Uygulama açıldığında ekranda bir menü görünür.

Kullanıcı şu işlemleri yapabilir:

1. Yeni yemek ekleme
2. Tüm yemekleri listeleme
3. Yemek arama
4. Programdan çıkma

## OOP yapısı

Projede iki temel class bulunur:

### `FoodItem`

Her yemek için tek bir nesne üretir.

Private veri üyeleri:

- `name`
- `calories`
- `unitType`

Bu sınıfta:

- constructor ile başlangıç değerleri atanır
- getter metodları ile veriler okunur
- setter metodları ile doğrulama yapılarak veri güncellenir

### `FoodManager`

Tüm yemekleri yöneten ana sınıftır.

Private veri üyeleri:

- `FoodItem* foodDatabase`
- `int currentFoodCount`
- `int capacity`

Bu sınıf:

- yemekleri dinamik dizi içinde saklar
- yeni yemek ekler
- tüm yemekleri listeler
- ada göre arama yapar
- dizi dolunca kapasiteyi iki katına çıkarır

## Dinamik bellek kullanımı

`FoodManager` constructor içinde ilk dizi `new` ile oluşturulur.

Dizi dolduğunda `resizeDatabase()` çağrılır:

1. Yeni kapasite eski kapasitenin iki katı olarak hesaplanır.
2. Yeni bir `FoodItem` dizisi oluşturulur.
3. Eski veriler yeni diziye kopyalanır.
4. Eski bellek `delete[]` ile temizlenir.
5. İşaretçi yeni diziye aktarılır.

Program kapanırken `FoodManager` destructor içinde dinamik bellek doğru şekilde serbest bırakılır.

## Fonksiyon akışı

Menü ve kullanıcı etkileşimi için yardımcı fonksiyonlar vardır:

- `showMenu()`
- `addFood()`
- `searchFood()`
- `readMenuChoice()`
- `readNonEmptyLine()`
- `readNonNegativeDouble()`
- `readUnitType()`

Böylece veri saklama sorumluluğu class'larda, kullanıcı arayüzü ise yardımcı fonksiyonlarda tutulmuştur.

## Dosyalar

- `main.cpp` : programın kaynak kodu
- `README.md` : proje açıklaması
