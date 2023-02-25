class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(int i=0; i< stones.size(); i++){
            for(int j=0; j<jewels.size(); j++){
                if(jewels[j] == stones[i]){ 
                    count++;
                    /// toshimizni birinchi uchrashishini topganimizdan so'ng keyingi toshimizga o
                    /// o'tishimiz uchun break ishlatilgan
                    break;
                }
            }
        }
        return count;
        
    }
};
