using namespace std;
using namespace std;

int Input(){
    int n; cin >> n;
    return n;
}

int sum_even_divisor(int n)
{
    int s = 0;
    for(int i=1;i<=n;i++){
        if(n%i==0&&i%2==0){
            s+=i;
        }
    }
    if(s==0) return -1;
    else return s;
}

int main() {
	int n;
	n=Input();
	cout << sum_even_divisor(n);
}
