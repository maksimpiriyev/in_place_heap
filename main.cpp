//
//  main.cpp
//  HeapInPlace
//
//  Created by Maksim Piriyev on 02.04.21.
//

#include <stdio.h>
#include "heap.h"


int main(int argc, const char * argv[]) {

    heap<int> h;
    // 1 , 2 , 3 , 4 , 5 , 6 , 7
    for(int i=10;i>=0;i--){
        h.push(i);
    }
//    for(int i=0;i<10;i++){
//            h.push(i);
//        }
//    h.push(0);
//    h.push(1);
//    h.push(2);
    
    while(h.size()){
        int t = h.top();
        h.pop();
        printf("%d\n",t);
    }
    return 0;
}
