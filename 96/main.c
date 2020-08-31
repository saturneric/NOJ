#include <stdio.h>

int do_find(int *stick, int count, int idx, int tmp, int k, int n);

int main(void){
    int n, sticks[64],sum,max;
    //printf("INPUT:\n");
    while(scanf("%d",&n) && n){
        sum = 0;
        max = 0;
        for(int i = 0; i < n; i++){
            int temp;
            scanf("%d",&temp);
            if(temp > max) max = temp;
            sum += temp;
            sticks[i] = temp;
        }
        for(int k = max; k <= sum; k++){
            if(!(sum % k)){
                int ts[64] = {0};
                for(int i = 0; i < n; i++) ts[i] = sticks[i];
                if(do_find(ts,0,0,k,k,n) == -1){
                    printf("%d\n",k);
                    break;
                }
            }
        }
    }
    return 0;
}

int print_s(int *stick, int n){
    for(int i = 0; i < n; i++) printf("%2d ",stick[i]);
    printf("\n");
    return 0;
}

int do_find(int *stick, int count, int idx, int tmp, int k, int n){
    count = 0;
    for(int k = 0; k < n; k++) if(!~stick[k]) count++;
    if(count == n){
        if(tmp == 0) return -1;
        else return 0;
    }
    for(int i = idx ; i < n; i++){
        if(~stick[i]){
            //print_s(stick, n);
            //printf("TMP:%d\n",tmp);
            if(tmp - stick[i] > 0){
                int temp = stick[i], result;
                stick[i] = -1;
                
                int ts[64] = {0};
                for(int i = 0; i < n; i++) ts[i] = stick[i];
                
                result = do_find(ts, count+1, i+1, tmp-temp, k, n);
                if(result == 1){
                    result = do_find(ts, count+1, 0, k, k, n);
                    if(result == -1) return -1;
                    else if(result == 0) continue;
                }
                else if(!~result) return -1;
                else{
                    continue;
                }
            }
            else if(tmp - stick[i] == 0){
                stick[i] = -1;
                if(count+1 == n) return -1;
                return 1;
            }
        }
    }
    return 0;
}
