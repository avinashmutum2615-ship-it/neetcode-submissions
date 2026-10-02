class MyHashMap {
private:
   struct pair{
    int key;
    int value;
   };
   vector<vector<pair>> bucket;
public:
    MyHashMap() {
        bucket.resize(10);
    }
    
    void put(int key, int value) {
        int index = key % 10;
        for(int i = 0; i < bucket[index].size(); i++){
            if(bucket[index][i].key == key){
                bucket[index][i].value = value;
                return;
            }
        }
        bucket[index].push_back({key,value});
    }
    
    int get(int key) {
        int index = key % 10;
        for(int i =0; i < bucket[index].size(); i++){
            if(bucket[index][i].key == key){
                return bucket[index][i].value;
            }
        }
        return -1;
    }
    
    void remove(int key) {
        int index = key % 10;
        for(int i = 0; i < bucket[index].size(); i++){
            if(bucket[index][i].key == key){
                bucket[index].erase(bucket[index].begin() + i);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */