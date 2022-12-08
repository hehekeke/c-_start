cmake_minimum_required(VERSION 3.21)
project(studyC_)
#

set(CMAKE_CXX_STANDARD 14)
#
#add_executable(studyC_ a.cpp int.cpp basetype/0204-float.cpp basetype/0205-char.cpp basetype/0206-escapeCharacter.cpp basetype/0207-string.cpp basetype/0208-bool.cpp basetype/0209-cin.cpp operator/0301-baseOperator.cpp operator/0302-bijiao.cpp operator/0303-luoji.cpp processControl/0401-if.cpp processControl/0402-ternaryOperator.cpp processControl/0403-switch.cpp processControl/0404-while.cpp processControl/0405-narcissusNumber.cpp processControl/0406-for.cpp processControl/0407-continue.cpp processControl/0408-goto.cpp arr/0501-initArr.cpp arr/0502-oneDimensionalArray.cpp arr/0503-bubbleSort.cpp arr/0504-twodimensionalArray.cpp 06func/0601-add.cpp 06func/0602-funcs.cpp 06func/0603-functionDeclaration.cpp 06func/functionFileCompilation/swap.cpp 06func/functionFileCompilation/swap.h 07pointer/0701-init.cpp 07pointer/0702-null-pointer.cpp 07pointer/0703-const-pointer.cpp 07pointer/0704-pointer-arr.cpp 07pointer/0705.cpp 07pointer/0706-pointer-bubbleSort.cpp 08struct/0801-init.cpp 08struct/0802-struct-arr.cpp 08struct/0803-struct-pointer.cpp 08struct/0804-struct-nest.cpp 08struct/0805-struct-as_funcParam.cpp 08struct/0806-struct-const.cpp 08struct/0807-demo.cpp 08struct/0808-demo2.cpp addressBookManagement/main.cpp "09内存模型/01 全局区.cpp" "09内存模型/02 栈区.cpp" "09内存模型/03 堆区.cpp" "09内存模型/04 new.cpp" 10quote-引用/01-init.cpp 10quote-引用/02-notice.cpp 10quote-引用/03-quto-funcParams.cpp 10quote-引用/04-quto-func-return.cpp 10quote-引用/05-quto-essence.cpp 10quote-引用/06-quto-const.cpp 11advancedFunctions/01-defaultParameters.cpp 11advancedFunctions/02-functionPlaceholderParameter.cpp 11advancedFunctions/03-functionOverload.cpp 11advancedFunctions/04-mattersNeedingAttention.cpp 12-classesObjects/01-circumferenceCircle.cpp 12-classesObjects/02-student-demo.cpp 12-classesObjects/03-封装权限.cpp 12-classesObjects/04-struct-class.cpp 13对象的初始化和清理/01-构造函数和解析函数.cpp 13对象的初始化和清理/02-构造函数的分类及调用.cpp)

set(CMAKE_C_STANDARD 99)

# 遍历项目根目录下所有的 .cpp 文件
# 如果你只需要根目录下的 test 文件夹的所有 .cpp 文件
file (GLOB files test/*.cpp)
# 如果你只有两层目录的话
file (GLOB files *.cpp */*.cpp)
# 同理，三层的话
file (GLOB files *.cpp */*.cpp */*/*.cpp)

foreach (file ${files})
    string(REGEX REPLACE ".+/(.+)\\..*" "\\1" exe ${file})
    add_executable (${exe} ${file})
    message (\ \ \ \ --\ src/${exe}.c\ will\ be\ compiled\ to\ bin/${exe})
endforeach ()
