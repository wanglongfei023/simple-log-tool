C++实现简易的日志工具

一、使用方式：
1、INIT_LOG("../log/test")，用路径+日志名前缀的方式初始化日志
2、LOG("debug", "test fuction of debug....")，使用等级+内容的方式打印日志
3、LOG("warning", "test fuction of warning with right expression...", 1 == 1）
   使用等级+内容+逻辑表达式的方式决定是否打印日志

二、
   日志文件有三个符号链接，分别指向最近一段日期内的产生的日志文件
