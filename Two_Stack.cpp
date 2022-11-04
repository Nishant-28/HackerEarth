#include <bits/stdc++.h> 
class TwoStack {
    int *a;
    int top1;
    int top2;
    int size;
public:

    // Initialize TwoStack.
    TwoStack(int s) {
        // Write your code here.
        this -> size = s;
        top1 = -1;
        top2 = size;
        a = new int[s];
    }
    
    // Push in stack 1.
    void push1(int num) {
        if(top2 - top1 > 1 ){ //atleast one empty array space
            top1++;
            a[top1] = num;
        }
    }

    // Push in stack 2.
    void push2(int num) {
        if(top2 - top1 > 1 ){ //atleast one empty array space
            top2--;
            a[top2] = num;
        }
    }
    
    int pop1() {
        if ( top1>=0){
            int ans = a[top1];
            top1--;
            return ans;
        }else{
            return -1;
        }
    }

    int pop2() {
        if ( top2<size){
            int ans = a[top2];
            top2++;
            return ans;
        }else{
            return -1;
    }
    }
};
