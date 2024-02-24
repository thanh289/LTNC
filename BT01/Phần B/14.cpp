//Đoán số lớn nhất. Xét trò chơi sau: Alice viết hai số nguyên trong khoảng từ 0 đến 100 vào 2 thẻ. 
//Bob được chọn xem giá trị ghi trên một trong hai thẻ. Sau khi xem thẻ, Bob được chọn một trong hai thẻ. 
//Nếu đó là thẻ có giá trị lớn hơn trong hai thẻ thì Bob thắng, nếu không thì Bob thua. 
//Hãy tìm một chiến lược chơi cho Bob và viết chương trình tương ứng để Bob chắc chắn thắng quá nửa số lần đoán.


#include <bits/stdc++.h>

using namespace std;

int main(int argc, char *argv[]){

    srand(time(NULL));

    //Tương ứng 2 lá bài
    int x, y;
    
    //Số lượt chơi
    cout<<"Number of turn want to play: ";
    int n; cin>>n;

    //Số lượt đúng
    int p =  0;

    for(int i=1; i<=n; i++){
        x = rand() % 100;
        y = rand() % 100;

        //không mất tính tổng quát, giả sử luôn chọn x;
        cout<<"Turn "<<i<<": x = "<<x<<endl;

        if(x>50) cout<<"Select x"<<endl;
        else cout<<"Select y"<<endl;

        if(x>50 && x>y) p++;
        else if (x<50 && x<y) p++;
        else continue;
    }
    cout<<"Rate to win: "<<(double) p/n <<endl;

}