int maxProfit(int* prices, int pricesSize) {
    int  b = 0;
    int output = 0;
    int a = prices[0];
    int temp = a;
    if(pricesSize != 0){
        for(int i = 1;i<pricesSize; i++){
            b = prices[i];
            if(b<temp){
                output = output + temp -a;
                a = b;
                temp = a;
                
            }
            else if(i<pricesSize-1){
                temp = b;
            }
            else{
                output = output + (b-a); 
            }        
        }
        
        printf("ProfitMax=%d\n", output);
        return output;
    }
    else{
        return 0;
    }
    
}
