# only_one-taylor_series
This code is implementing a Taylor series for ln(x+1).

這個代碼是在實做ln(x+1)的泰特級數


## method
無法一眼看出ln(x+1)如何以級數表示，所以我們可以觀察ln(x+1)微分後的結果，因為透過微分結果可以去推出函式的級數。

## differential ln(x+1) = 1/(x+1)
ln(x+1)的微分：1/(x+1)

根據等比級數的規則可以得知1/(x+1)轉換成級數為：


<img width="111" alt="image" src="https://github.com/LoTzuChin/only_one-taylor_series/assets/115769579/36a481b1-f5fd-495c-b94d-e75ed0e53242">

## ln(x+1) series
根據上述級數，推出ln(x+1)的級數：


<img width="575" alt="image" src="https://github.com/LoTzuChin/only_one-taylor_series/assets/115769579/c20ef2b5-cfa2-40dc-a72c-5d8a35eff61a">

## notice
1/(x+1) 這個函式的收斂半徑為 |x| ＜ 1，且在 -1 與 1 這兩點均不收斂，故收斂區間為 -1 ＜ x ＜ 1

而函數在微分與積分的過程中，收斂半徑並不會改變，但兩個端點卻可能發生變化，因此需要帶數字進行驗證

故，ln(x+1) 的收斂半徑為 |x| ＜ 1，在 1 這點將會收斂，故收斂區間為 -1 ＜ x ≦ 1
