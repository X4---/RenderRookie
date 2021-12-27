# 简介

## 框架结构


* imgui 库
* cimgui 库
* ImGui.Net 库
* 外部Build 脚本



## imgui 库
    原始的imgui库，有基础的代码逻辑

* imgui 基础UI库
  
* backend 不同的平台DX openGL 的实现
  
## cimgui 

    对应cimgui 的封装

* 包含imgui原始代码  
  
* generator
  
    使用luajit gcc等工具链将对应的imgui 封装为cimgui.dll  ,同时自动生成接口文件 cimgui.h cimgui.cpp 以及对应的符号表 definitions.json ... 等

## ImGui.Net
    使用cimgui的接口再次封装的C#库

* 包含 CodeGenerator  

  将使用cimgui的luajit 所导出的符号表 definitions.json 自动生成 c#端的{_}gen.cs接口文件
  
* 包含 ImGui.NET
  
  将使用CodeGenerator 所生成的cimgui.DLL 的自动的符号导入导出表 ImGuiNative.gen.cs 以及枚举和字段的对应的gen.cs

* 包含 ImPlot.NET,imnodes,imGuizmo 等额外的dll 依赖于 cimplot(类似于cimgui 对imgui 的封装)
  

* 包含 示例工程 ImGui.Net.SampleProgram

## To Do Lists

* 对应的backend对应的符号表是导出了,但是没有生成对应的 额外的库