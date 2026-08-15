// friend function simple example
class Box {
private:
    int length;
public:
    Box(int l) { length = l; }

    // Declare friend function
    friend void display(Box b);
};

// Definition of friend function
void display(Box b) {
    cout << "Length = " << b.length << endl;  // ✅ can access private
}

int main() {
    Box b(20);
    display(b);   // Output: Length = 20
}
