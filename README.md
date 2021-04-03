# in_place_heap
In place heap (priority queue) for embedded systems such as arduino, stm32,etc. O(logN) complexity, always returns the min element.
Easy to use code samples below
```c++
int size = 1024;
heap<int,size> heap_with_size;
```
```c++

heap<int> h;

for(int i=10;i>=0;i--){
   h.push(i);
}
    
while(h.size()){
   int t = h.top();
   h.pop();
   printf("%d, ",t);
}
```
prints out as 
```
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10,
```
also the below code:
```c++
class test{
public:
    int d = 0;
    test(){}
    test(int d):d(d){}
    bool operator < (const test& t){ return d < t.d;}
};

heap<test> h2;
for(int i=10;i>=0;i--){
   h2.push(test(i));
}

while(h2.size()){
   auto t = h2.top();
   h2.pop();
   printf("%d, ",t.d);
}
```
