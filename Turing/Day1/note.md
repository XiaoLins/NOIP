# 题目

https://vjudge.net/contest/236912

## C


### 二分

0.9的很大次方 ≈ 0

## D

### 状压DP算法/贪心

# 笔记

long long = long double
0LL = const long long
00L = const long

## 代码规范

一元挨着 二元空格

ab比较（浮点数）

a-b sgn(a-b)

```cpp

int sgn(double x){
    if (x < -10^-8){
        return -1;
    } else{
        return x > -10^-8;
    }
}

```
## 输入输出
用scanf & printf

00000001 > %08d
输入%lf 输出%f

### 整行输入

getline
fgets(s, maxn, stdin)

### 循环

视情况使用while或者for

### 函数与DV
1. 变量的作用域（对哪里可见）
2. 变量的空间

空间> 栈空间，堆空间
临时在栈
静态/常亮在堆
注意不要爆栈

### 参数传递
参数不能太大 > 爆栈
基本变量 > 注意大小
其他变量 > 传引用

### 类与结构体
类分为数据和函数
函数>
1. 构造函数 > 初始化对象的时候调用，用来填数据
2. 析构函数 > 变量失效时调用
3. 重载操作符 > "<"

### 创建对象的方式
struct T{
    xxx
}
1. T x;
2. new > 返回指针 要手动delete （比较慢）

### STL容器

<algorithm>

sort(a, a+n);
unique(a, a+n);
lower_bound 找>=
upper_bound 找<

nth.element(a,a+k) //把第k小的元素放在a+k的位置

inplace_merge() 要求两边一致

<cstring>
strlen() 求cstring长度
strcmp() 比较cstring

#### 常用容器

string
string s(10, 'a'); 生成一个10个a的字符串

线性数据结构
vector queue stack deque list

二元组
pair

begin() & end()

## 基础算法

### 复杂度
O(n²)

### 二分查找
用lower_bound & higher_bound

### 二分答案

0/1 分数规划

### 动态规划

实现方式：
1. 循环遍历状态
2. 记忆化搜索
3. 刷表法

类型：
1. 线性结构
2. 区间结构
3. 树形结构
4. 状态压缩

#### 优化策略

1. 状态精简
2. ...

### 数论
ax + by = gcd(a,b)
欧拉函数求解不定方程：ax + by = g
```cpp
void gcd (int a, int b, int &g, int &x, int &y){
    if (b == 0){
        g=a;
        x=1;
        y=0;
    } else{
        gcd (b, c%b, g, y, x);
        y -= a/b*x;
    }
}
```
逆元：a*%p=1 a与p互为逆元
(a/b)%p != a%p / b%p;

逆元
a/b%p = a * inv(b) % p

求解ax%p=1

1. 费马小定理

a^(p-2)是a关于a%p的逆元
限制：a必须是素数
2. ax+py=1 用拓展欧几里得求解

### 组合数取模

如何求C m/n % p n = 10五次幂

### 概率和期望

概率=出现/总

>古典概型
>贝叶斯定理

#### 期望
总期望=子期望A+子期望B

### 矩阵


