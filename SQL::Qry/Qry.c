///[Qry]/////////////////////////////////////////////////////////////
///Des=This builtin function directly Exec query and
///    send handle to inner script , no need external scripts
///QryHdl=return data recieved from query directl like event handle and
///       no need variable.
/////////////////////////////////////////////////////////////////////



///[Example_0]/////////////////////////////
public void Example_0()
{
  Qry("SELECT * FROM _History WHERE Date='Sunday'"){
    return QryHdl.Data.ToInteger();
  }
}



///[Example_1]/////////////////////////////
public void Example_1()
{
  
  Qry("SELECT * FROM _History WHERE Date='Sunday'"){
    Qry("SELECT * FROM ${QryHdl.Data.ToInteger()} WHERE >10"){
      Http.Snd(QryHdl.Data);
    }
  }    
  
}
