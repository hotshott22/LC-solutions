class Bank {
public:
    vector<long long>bal;
    int n;

    bool valid(int acc){
        return acc>0 && acc<=n;
    }
        

    Bank(vector<long long>& balance) {
        bal=balance;
        n=balance.size();
    }
    
    bool transfer(int from, int to, long long amt) {
        if(!valid(from) || !valid(to) || bal[from-1]<amt )  return false;
        bal[from-1]-=amt;
        bal[to-1]+=amt;
        return true;
    }
    
    bool deposit(int account, long long money) {
        if(!valid(account)) return false;
        bal[account-1]+=money;

        return true;
    }
    
    bool withdraw(int account, long long money) {
        if(!valid(account) || bal[account-1]<money) return false;
        bal[account-1]-=money;
        return true;
    }
};

/**
 * Your Bank object will be instantiated and called as such:
 * Bank* obj = new Bank(balance);
 * bool param_1 = obj->transfer(account1,account2,money);
 * bool param_2 = obj->deposit(account,money);
 * bool param_3 = obj->withdraw(account,money);
 */