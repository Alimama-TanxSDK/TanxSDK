#!/bin/bash

# Function to prompt for user input
prompt_for_input() {
    read -p "$1" input
    echo $input
}

# Step 1: 提交Podspec和二进制文件
echo "提交Podspec和二进制文件到仓库中..."

# 添加所有更改到暂存区
git add .

# 提交这些更改并添加提交信息
git commit -m "优化】开屏广告增加新模版id；"

# 给提交打上标签
git tag 3.6.7

# 推送提交和标签到远程仓库
git push origin master --tags
echo "提交到Git仓库完成。"
echo

# Step 2: 提交到CocoaPods公有仓库
echo "提交到CocoaPods公有仓库..."

# 提交Podspec文件到CocoaPods公共仓库
pod trunk push TanxSDK.podspec --allow-warnings

# 检查提交状态，如果有错误或警告，按提示修改
if [ $? -eq 0 ]; then
    echo "Podspec文件提交成功！"
else
    echo "提交失败！请检查并按提示修改后重试。"
fi