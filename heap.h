//
//  heap.h
//  HeapInPlace
//
//  Created by Maksim Piriyev on 02.04.21.
//

#pragma once


template <typename T,int K = 32>
class heap{
    T data[K] = {0};
    int length = 0;
    void swap(T& t1,T& t2){
        T t = t1;
        t1 = t2;
        t2 = t;
    }
    void heapifyUp(int i){
        int p = (i-1)/2;
        if(i == p) return;
        if(data[p] > data[i]){
            swap(data[p],data[i]);
            heapifyUp(p);
        }
    }
    void heapifyDown(int i){
        int left = 2*i + 1, right = 2*i + 2;
        if(right < length && data[right] < data[left] && data[right] < data[i]){
            swap(data[right],data[i]);
            heapifyDown(right);
        }else if(left < length&& data[left] < data[i]){
            swap(data[left],data[i]);
            heapifyDown(left);
        }
    }
public:
    inline int size(){return length;}
    void push(T t){
        data[length++] = t;
        heapifyUp(length-1);
    }
    T top(){
        return data[0];
    }
    void pop(){
        if(length == 0)
            return;
        data[0] = data[length-1];
        data[length-1] = 0;
        length--;
        heapifyDown(0);
        
    }
};
