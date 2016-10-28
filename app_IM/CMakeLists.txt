cmake_minimum_required(VERSION 3.6)
project(app_IM)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    CommonTools/SimpleEnc/SimpleEnc.c
    CommonTools/SimpleEnc/SimpleEnc.h
    login/Decode.c
    login/EncAuthInfo.c
    login/Encode.c
    login/GetAuthRes.c
    login/GetUsrAndPwd.c
    login/login.h
    login/ParseAuthRes.c
    login/PostAuthMsg.c
    login/ProcessAuthRes.c
    SearchUser/AddFriends/AgreeRequest.c
    SearchUser/AddFriends/AgreeRequest.h
    SearchUser/AddFriends/FriendRequest.c
    SearchUser/AddFriends/FriendRequest.h
    SearchUser/AddFriends/ReceiveFriendRequest.c
    SearchUser/AddFriends/ReceiveFriendRequest.h
    SearchUser/AddFriends/SendRequestResult.c
    SearchUser/AddFriends/SendRequestResult.h
    SearchUser/AddFriends/UpdateLocalList.c
    SearchUser/AddFriends/UpdateLocalList.h
    SearchUser/BrowseFriendList/GetFriendList.c
    SearchUser/BrowseFriendList/GetFriendList.h
    SearchUser/BrowseFriendList/PresentFriendList.c
    SearchUser/BrowseFriendList/PresentFriendList.h
    SearchUser/BrowseFriendList/SendListRequest.c
    SearchUser/BrowseFriendList/SendListRequest.h
    SearchUser/FindFriends/GetInputCond.c
    SearchUser/FindFriends/GetInputCond.h
    SearchUser/FindFriends/GetResult.c
    SearchUser/FindFriends/GetResult.h
    SearchUser/FindFriends/PresentResult.c
    SearchUser/FindFriends/PresentResult.h
    SearchUser/FindFriends/SendData.c
    SearchUser/FindFriends/SendData.h
    SearchUser/Generic.h
    SearchUser/TcpSocket.h)

add_executable(app_IM ${SOURCE_FILES})