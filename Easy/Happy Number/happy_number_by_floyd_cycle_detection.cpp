class Solution {
public:
    bool isHappy(int n) {
        int slow = n; 
        int fast = n;
        do{
            slow = oneStep(slow);
            fast = oneStep(fast);
            fast = oneStep(fast);
            if(fast==1)
                return true;
        }while(slow!=fast);
        //if n is a happy number, slow will equal 1 and fast will equal 1 one in the end
        //if n is not a happy number, there must exits loop, so slow will equal fast in the process.
        if (slow==1)
            return true;
        return false;
    }
    int oneStep(int n)
    {
        int sum = 0;
        while(n)
        {
            sum += (n%10)*(n%10);
            n/=10;
        }
        return sum;
    }
};