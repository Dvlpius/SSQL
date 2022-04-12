///[Qry]/////////////////////////////////////////////////////////////
///Des=This builtin function directly Exec query and
///    send handle to inner script , no need external scripts
///QryHdl=return data recieved from query directl like event handle and
///       no need external variable similar this.
///QryHdl==QueryHandle==this==EventHandle;
/////////////////////////////////////////////////////////////////////



///[Example_0]/////////////////////////////
public int Qry("SELECT * FROM _History WHERE Date='Sunday'"){
    return QryHdl.Data.ToInteger();
}



///[Example_1]/////////////////////////////
public void Qry("SELECT * FROM _History WHERE Date='Sunday'"){
    Qry("SELECT * FROM ${QryHdl.Data.ToInteger()} WHERE >10"){
      Http.Snd(QryHdl.Data);
    }
}    



///[Example_3]/////////////////////////////////////////////////////////
Qry("SELECT FAV FROM _History WHERE Date='Sunday'"){
    Qry("SELECT * FROM ${QryHdl.Parent} WHERE FavRank>90%"){
        Qry("SELECT {QryHdl.Data} FROM ${QryHdl.Parent} GREEP _odd_"){
            Qry("SORT {QryHdl.Data} DES _DATE_"){
                Qry("FORMAT {QryHdl.Data} XML")
                    Http.Snd(QryHdl.Data);
                {
            {    
        }
    }
}    

