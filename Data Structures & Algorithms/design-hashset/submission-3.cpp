class MyHashSet {
private:
    bool myArray[1000001];
public:
    MyHashSet() {
        fill(begin(myArray), end(myArray), false);
    }
    
    void add(int key) {
        myArray[key] = true;
    }
    
    void remove(int key) {
        myArray[key] = false;
    }
    
    bool contains(int key) {
        return (myArray[key]);
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */