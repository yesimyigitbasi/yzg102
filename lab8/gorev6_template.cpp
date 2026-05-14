class IntDizisi {
    int* veri;
    int  boyut;
public:
    IntDizisi(int b);               // new int[b]
    IntDizisi(const IntDizisi& d);  // deep copy
    ~IntDizisi();                   // delete[]
    void doldur(int baslangic);     // veri[i] = baslangic + i
    void yazdir() const;
    int  getBoyut() const;
};
