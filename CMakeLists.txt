cmake_minimum_required(VERSION 3.6)
project(os_util)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES
    app_IM/CommonTools/SimpleEnc/SimpleEnc.c
    app_IM/CommonTools/SimpleEnc/SimpleEnc.h
    app_IM/login/Decode.c
    app_IM/login/EncAuthInfo.c
    app_IM/login/Encode.c
    app_IM/login/GetAuthRes.c
    app_IM/login/GetUsrAndPwd.c
    app_IM/login/login.h
    app_IM/login/ParseAuthRes.c
    app_IM/login/PostAuthMsg.c
    app_IM/login/ProcessAuthRes.c
    app_IM/register/EncRegisterInfo.c
    app_IM/register/GetRegisterInfo.c
    app_IM/register/GetRegisterRes.c
    app_IM/register/ParseRegisterRes.c
    app_IM/register/PostRegisterMsg.c
    app_IM/register/ProcessRegisterRes.c
    app_IM/register/register.h
    app_IM/register/ShowRegisterPage.c
    app_IM/SearchUser/AddFriends/AgreeRequest.c
    app_IM/SearchUser/AddFriends/FriendRequest.c
    app_IM/SearchUser/AddFriends/ReceiveFriendRequest.c
    app_IM/SearchUser/AddFriends/SendRequestResult.c
    app_IM/SearchUser/AddFriends/UpdateLocalList.c
    app_IM/SearchUser/BrowseFriendList/GetFriendList.c
    app_IM/SearchUser/BrowseFriendList/PresentFriendList.c
    app_IM/SearchUser/BrowseFriendList/SendListRequest.c
    app_IM/SearchUser/DeleteFriend/SendDeleteRequest.c
    app_IM/SearchUser/FindFriends/GetInputCond.c
    app_IM/SearchUser/FindFriends/GetResult.c
    app_IM/SearchUser/FindFriends/PresentResult.c
    app_IM/SearchUser/FindFriends/SendData.c
    app_IM/SearchUser/ViewProfile/GetReturnProfile.c
    app_IM/SearchUser/ViewProfile/SendViewRequest.c
    app_IM/SearchUser/ViewProfile/ViewProfile.c
    app_IM/SearchUser/Generic.h
        app_IM/sendMessage/EncData.cpp
    app_IM/sendMessage/GetSendRes.cpp
    app_IM/sendMessage/GetUsrMsg.cpp
    app_IM/sendMessage/PostUsrMsg.cpp
    app_IM/sendMessage/ProcessMsgRes.cpp
    app_IM/sendMessage/sendMessage.h)

add_executable(os_util ${SOURCE_FILES})