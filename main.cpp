/*
Ahmed Arafat
Business Information System
ahmedmoyousry.bis@gmail.com
6-2020
Piece Of Cake
*/
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
typedef long double ld;
typedef std::pair<int, int> pii;
typedef std::pair<ll, ll> pll;
typedef std::pair<std::string, std::string> pss;
typedef std::vector<int> vi;
typedef std::vector<vi> vvi;
typedef std::vector<pii> vii;
typedef std::vector<ll> vl;
typedef std::vector<vl> vvl;
typedef std::map<ll, ll> mpll;
double EPS = 1e-9;
int INF = 1000000005;
long long INFF = 1000000000000000005LL;
double PI = acos(-1);
int dirx[8] = {-1, 0, 0, 1, -1, -1, 1, 1};
int diry[8] = {0, 1, -1, 0, -1, 1, -1, 1};

#ifdef TESTING
#define DEBUG fprintf(stderr, "====TESTING====\n")
#define VALUE(x) cerr << "The value of " << #x << " is " << x << endl
#define debug(...) fprintf(stderr, __VA_ARGS__)
#else
#define DEBUG
#define VALUE(x)
#define debug(...)
#endif

#define FOR(a, b, c) for (int(a) = (b); (a) < (c); ++(a))
#define FORN(a, b, c) for (int(a) = (b); (a) <= (c); ++(a))
#define FORD(a, b, c) for (int(a) = (b); (a) >= (c); --(a))
#define FORSQ(a, b, c) for (int(a) = (b); (a) * (a) <= (c); ++(a))
#define FORC(a, b, c) for (char(a) = (b); (a) <= (c); ++(a))
#define FOREACH(a, b) for (auto&(a) : (b))
#define REP(i, n) FOR(i, 0, n)
#define REPN(i, n) FORN(i, 1, n)
#define MAX(a, b) a = max(a, b)
#define MIN(a, b) a = min(a, b)
#define SQR(x) ((LL)(x) * (x))
#define RESET(a, b) memset(a, b, sizeof(a))
#define fi first
#define se second
#define mp make_pair
#define pb push_back
#define ALL(v) v.begin(), v.end()
#define ALLA(arr, sz) arr, arr + sz
#define SIZE(v) (int)v.size()
#define SORT(v) sort(ALL(v))
#define REVERSE(v) reverse(ALL(v))
#define SORTA(arr, sz) sort(ALLA(arr, sz))
#define REVERSEA(arr, sz) reverse(ALLA(arr, sz))
#define PERMUTE next_permutation
#define TC(t) while (t--)
#define HANDLE_WRONG_INPUT          while(std::cin.fail()){std::cin.clear();std::cin.ignore();}
#define debug                       printf("I am here\n");
#define ll                  long long
#define scl(n)              scanf("%lld", &n)
#define scf(n)              scanf("%lf", &n)
#define pfl(x)              printf("%lld\n",x)
#define md                  10000007
#define pb                  push_back
#define fr(i, n)             for (ll i=0;i<n;i++)
#define fr1(i, n)            for(ll i=1;i<=n;i++)
#define asort(a)            sort(a,a+n)
#define dsort(a)            sort(a,a+n,greater<int>())
#define pn                  printf("\n")
#define debug               printf("I am here\n")
#define ps                  printf(" ")

/******************************Code Starts Here*********************************************/

class product {

private:
    int product_id;
    string name;
    string category;
    string description;
    double price;
    bool has_discount;

public:

    void Setter(int id, string n, string cat, string desc, double p, bool has) {
        product_id = id;
        name = n;
        category = cat;
        description = desc;
        price = p;
        has_discount = has;
    }

public:
    void report() {
        cout << "Product ID is : " << product_id << endl;
        cout << "Product name is : " << name << endl;
        cout << "Product category is : " << category << endl;
        cout << "Product price is : " << price << endl;
        if (has_discount)
            cout << "Product has a discount" << endl;
        else
            cout << "Product does not have a discount" << endl;
        cout << "Product Description is : " << description << endl << endl << endl;
    }
};

///Creating Order Class
class order {
private :
    ///Attribuites of class
    static int count_order;
    int order_number;
    string order_date;
    double order_value;
    int no_of_product;
    string client_name;
public :
    ///setter function
    void Setter(int n, string date, double value, int no, string c_name) {
        order_number = n;
        order_date = date;
        order_value = value;
        no_of_product = no;
        client_name = c_name;
        count_order++;
    }

    ///report function
    void report() {
        cout << " #Order : " << endl;
        cout << "Order Number is : " << order_number << endl;
        cout << "Order Date is : " << order_date << endl;
        cout << "Order Value is : " << order_value << endl;
        cout << "No. of Products in Order  is/are : " << no_of_product << endl;
        cout << "Client Name of Order  is : " << client_name << endl << endl << endl;
    }

    void No_Of_Orders() {
        cout << "Number of Order(s) is/are : " << count_order << endl << endl;
    }
};

int order::count_order = 0;

void Print(int n) {
    cout << "Product No. " << n + 1 << " :" << endl << endl;
}

int id, i, j, user_or_client, ord_num, no_prod;
string n, cat, desc, ord_d, cli_n;
double p, ord_val;
bool has_disc;
product obj[10];//Array of Object of Type Product
vector<order> order_list;// Dynamic array of object of type order
order O;

///MAIN()
int main() {
    cout << "\t\t\t\t\t\t\t\t ********************************\n" << endl;
    cout << "\t\t\t\t\t\t\t\t Welcome To Order System Project\n" << endl;
    cout << "\t\t\t\t\t\t\t\t ********************************\n" << endl;
    while (true) {
        cout << "Please Enter\n(1) if you're a User \n(2) if you're a Client\n(3) To END PROGRAM" << endl
             << endl;
        cin >> user_or_client;
        cout << endl;
        if (user_or_client == 1) {
            int user_options;
            cout
                    << "Please enter : \n (1) if you want to input product details \n (2) if you want to modify product details \n (3) to display full report"
                    << endl << endl;
            cin >> user_options;
            cout << endl;
            if (user_options == 1) {
                cout
                        << "Please enter :\n1)product ID\n2)product name\n3)product category\n4)product price \n5)if product has a discount (enter 1 if have and 0 if not)\n6)product description\nRespectively"
                        << endl << endl;
                for (i = 0, j = 9; i < 10; i++, j--) {
                    cin >> id >> n >> cat;
                    cin >> p >> has_disc;
                    getline(cin, desc);
                    cout << endl;
                    obj[0];
                    obj[i].Setter(id, n, cat, desc, p, has_disc);
                    // obj[i].report();
                    cout << "Product has been successfully recorded" << endl << endl;
                    if (j != 0)
                        cout << "You have to enter " << j << " more items" << endl << endl;
                    else
                        cout << "Done :)" << endl << endl;
                }
            }
            if (user_options == 2) {
                int product_number;
                cout << "Please enter No. Of Product You want to modify " << endl << endl;
                cin >> product_number;
                cout
                        << "\nPlease enter it's new :\n1)product ID\n2)product name\n3)product category\n4)product price \n5)if product has a discount (enter 1 if have and 0 if not)\n6)product description\nRespectively"
                        << endl << endl;
                cin >> id >> n >> cat;
                cin >> p >> has_disc;
                getline(cin, desc);
                obj[product_number - 1].Setter(id, n, cat, desc, p, has_disc);

                cout << "\n\nProduct No. " << product_number << " has been successfully modified" << endl << endl;
            }
            if (user_options == 3) {
                if (order_list.empty())
                    cout << "No orders have been recorded\n" << endl;
                else {
                    order_list[0].No_Of_Orders();
                    for (i = 0; i < order_list.size(); i++) {
                        order_list[i].report();
                    }
                    cout << endl << endl;
                }
                for (i = 0; i < 10; i++) {
                    Print(i);
                    obj[i].report();
                }
            }
        } else if (user_or_client == 2) {
            cout << "Please enter No. of Orders you want to make \n" << endl;
            int no_orders;
            cin >> no_orders;
            cout
                    << "\nPlease enter :\n1)Order Number\n2)Order Date (dd.mm.yyyy Format)\n3)Order Value\n4)No. of Products\n5)Your Name \nRespectively\n\n";
            for (i = 0; i < no_orders; i++) {
                cin >> ord_num >> ord_d >> ord_val >> no_prod;
                getline(cin, cli_n);
                cout << endl;
//set values for the object of order class
                O.Setter(ord_num, ord_d, ord_val, no_prod, cli_n);
                //enter the object of order class into order list
                order_list.push_back(O);
                cout << "Order has been successfully recorded" << endl << endl;
            }
        } else if (user_or_client == 3) {

            cout << "Are you really want to Exit Program " << endl;
            cout << "[Y/N]" << endl << endl;
            char c;
            cin >> c;
            cout << endl;
            if (c == 'Y') {
                cout << "Thanks For Using Our Program (^_^) " << endl;
                break;
            } else if (c == 'N')
                continue;
        } else {
            cout << "Error .. please make sure that you have entered 1 , 2 or 3 :)";
            break;
        }

    }

}
/*
        INPUTS:

        466 pepsi drinks  10 1 i love it1
        8998 pepsi drinks  20.6 0 i love it2
        65343 pepsi drinks  50.7 1 i love it3
        121 pepsi drinks  33.1 0 i love it4
        998 pepsi drinks  99.9 1 i love it5
        11223 pepsi drinks  87 0 i love it6
        5544676 pepsi drinks  100.9 0 i love it7
        77889 pepsi drinks  1 0 i love it8
        445554 pepsi drinks  33 0 i love it9
        66667 pepsi drinks  2 1 i love it10

        66667 pepsi drinks  2 1 i love it10

        213 4.4.2020 50.5 4 Ahmed Arafat

*/
