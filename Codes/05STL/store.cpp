#include<iostream>
#include<vector>
#include<deque>
#include<list>
#include<set>
#include<map>
#include<ctime>
#include<unordered_map>
#include<unordered_set>

using namespace std;

struct Product{
    int productId;
    string productName;
    string category;
};

struct Customer{
    int customerId;
    string name;
};

struct Order{
    int orderId;
    int productId;
    int quantity;
    string customerId;
    time_t orderDate;
};

int main(){
    vector<Product> products = {
        {101,"Laptop","Electronics"},
        {102,"IPhone","Electronics"},
        {103,"ParleG","FMCG"},
        {104,"Dove","FMCG"},
    };

    deque<string> recentCustomer = {"C001", "C002", "C003"};
    recentCustomer.push_back("C004");
    recentCustomer.push_back("C005");

    list<Order> orderHistory;

    orderHistory.push_back({1,101,2,"C002",time(0)});
    orderHistory.push_back({2,102,1,"C005",time(0)});
    orderHistory.push_back({1,104,5,"C003",time(0)});

    set<string> categories;
    for(const auto &product : products){
        categories.insert(product.category);
    }

    map<int, int> productStock = {//s0rted order //BTS used bst
        {101,10},
        {102,14},
        {103,44},
        {104,4},
        {105,9},
    };

    multimap<string, Order> customerOrders;
    for(const auto &order: orderHistory){
        customerOrders.insert({order.customerId, order});
    }

    unordered_map<string, string> customerData = {//unsorted order
        {"C001", "Alice"},//BTS use hash table
        {"C002", "Manav"},
        {"C003", "Max"},
        {"C004", "Harry"},
        {"C005", "Ron"},
    };

    unordered_set<int> uniqueProductIds;
    for(const auto &product : products){
        uniqueProductIds.insert(product.productId);
    }


    return 0;
}
