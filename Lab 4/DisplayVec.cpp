//DisplayVec.cpp
#include "DisplayVec.h"
/**
 * @brief Construct a new display vec
 * 
 */
DisplayVec::DisplayVec(){


}
        void printVector(const vector<int> v){
        for(int i = 0; i < v.size(); i++){
            cout << v[i] << endl;
        }

        }
        int DisplayVec::getVectMemSize(const vector<int> v){

            int mem_size = 0;
            for(int i = 0; i < v.size(); i++){
                mem_size += sizeof(v[i]);
            }
            return mem_size

        }
        const int * DisplayVec::getAddress(vector<int> v, int index){
        int * addr = &v[index];
        return addr;
    
        }
/**
 * @brief prints total size of v and the memory locations of elements in v
 * 
 * @param v 
 */
    int DisplayVec::printMetaVector(const vector<int> v){
    int mem_size = getVectMemSize(v);
    int int_size = sizeof(v[0]);
    printf("Array has %i number of integers. Each integer is worth %i bytes, totaling up to %i bytes of memory.\n", v.size(), int_size, mem_size);
    printf("Element at index %i is located at (%p)\n", 0, getAddress(v, 0));
    printf("Element at index %i is located at (%p)\n", 1, getAddress(v, 1));
    printf("Element at index %i is located at (%p)\n", v.size()-1 ,getAddress(v, v.size()-1));
    }