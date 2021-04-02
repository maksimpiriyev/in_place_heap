# in_place_heap
In place heap (priority queue) for embedded systems such as arduino, stm32,etc. O(logN) complexity, always returns the min element.
Easy to use code samples below

```c++
 heap<int> h;

  for(int i=10;i>=0;i--){
        h.push(i);
    }
    
    while(h.size()){
        int t = h.top();
        h.pop();
        printf("%d\n",t);
    }
```
