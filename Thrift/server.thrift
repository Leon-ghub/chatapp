namespace cpp server

service chatServer{

    bool findUser(1:string username);
    bool addUser(1:string username);
    bool createRoom(1:string roomname);
    bool joinRoom(1:string roomname);
    
}