class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        int n=image.size();
        int row=n;
        int col=image[0].size();
        for(int i=0;i<row;i++){
            int s=0,e=n-1;
            while(s<e){
                swap(image[i][s],image[i][e]);
                s++;e--;
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(image[i][j]==0){
                    image[i][j]=1;}
                else{
                    image[i][j]=0;}
            }
        }
        return image;
    }
};