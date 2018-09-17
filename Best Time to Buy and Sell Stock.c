int maxProfit(int* prices, int pricesSize) {
    int Maxprofit = 0;
    if(pricesSize == 0){
        return Maxprofit;
    }
    else{
        int a =prices[0];
        int Tempprofit = 0;
        for(int i=1;i<pricesSize;i++){
            int b = prices[i];
            if(b<=a){
                a=b;
            }else{
                Tempprofit = b-a;
                if(Tempprofit>Maxprofit){
                    Maxprofit = Tempprofit;
                }
            }
        }
    }
    return Maxprofit;
}
