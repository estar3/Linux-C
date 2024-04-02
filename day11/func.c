#include <stdio.h>
//函数玩法步骤一:函数定义
//形式1:定义无返回值无形参的函数
void foo(void){//函数名foo符合标识符命名规则
    printf("void foo(void)\n");
    //return;
}
void foo1(void){
    printf("void foo1(void)\n");
    return;//函数从这里就结束, 不需要返回一个值, 后面什么也不加
    printf("我会被执行吗\n");
}
//形式2:定义无形参有返回值的函数
//不需要传递参数, 函数执行完毕后会返回一个数值
int bar(void){
    return 520;//返回常量 - int
}
int bar1(void){
    int a = 520;
    a++;
    return a;//返回的是变量a的值521
}
int bar2(void){
    printf("void bar2(void)\n");
    //忘记加上return语句了 - 返回随机数
}
char bar3(void){
    int a = 555;
    return a;//gcc强制将int类型a转换为char类型, 再返回该值
}
//形式3:定义无返回值有形参的函数
void add(int x, int y){//x,y-形参变量 - 用于保存调用函数给该函数传递的值
                       //将实参a的值赋值给了x, 将实参b的值赋值给y
                       //x = 100, y = 200
                       //型参变量x,y 和 实参变量a,b 的内存都是独立的
                       //x = a = 100, y = b = 200
    printf("add:x + y = %d\n", x + y);
}
//形式4:定义有返回值有形参的函数
int sub(int x, int y){
    return x - y;
}


int main(void){
    printf("main函数开始\n");
    //函数玩法步骤二:函数调用
    foo();//调用无形参无返回值函数foo
    foo1();//调用无形参无返回值函数foo1
    int ret = 0;//保存返回值
    int a = 100, b = 200;
    add(a, b);//调用add函数, 并且传递两个实参变量a,b的值100,200
    ret = sub(a, b);//调用有形参有返回值的函数sub, 传递实参a和b的值100,200
                    //并且使用ret保存sub函数的返回值
    printf("sub函数返回值为:%d\n", ret);
    ret = bar();//调用无形参有返回值函数bar, 并且使用ret保存返回值
    printf("bar函数返回值为:%d\n", ret);
    ret = bar1();//调用无形参有返回值函数bar1, 并且使用ret保存返回值
    printf("bar1函数返回值为:%d\n", ret);
    ret = bar2();//调用无形参有返回值函数bar2, 并且使用ret保存返回值
    printf("bar2函数返回值为:%d\n", ret);
    ret = bar3();//调用无形参有返回值函数bar3, 并且使用ret保存返回值
    printf("bar3函数返回值为:%d\n", ret);

    printf("main函数结束\n");
    return 0;
}

