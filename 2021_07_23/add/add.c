int Add(int x, int y)  // 函数的定义
{
	int z = x + y;
	return z;
}

// 产生静态库的操作如下：
// 1.创建一个项目add，将实现好的add.h、add.c文件拷贝放在项目的模块里面
// 2.修改项目属性中的配置类型，从应用程序（.exe）改为静态库（.lib），编译后生成add.lib（项目里没有主函数，因此该项目无法运行，但是可以编译）
// 3.最终将add.lib和add.h打包

// 将打包好的add.lib和add.h放在需要的工程文件夹下。然后在该工程内添加现有项add.h（add.lib不用添加，加进去也看不懂）
// 在工程中加入下面一行代码导入静态库，否则还是无法使用
// #pragma comment(lib, "add.lib")