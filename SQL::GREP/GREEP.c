///[Example_0]///////////////////////////////
public void Example_0()
{
  Ret = Qry("SELECT * FROM _History GREEP *cmd");
  Print(Ret);
}  
///Result:///
///am12cmd
///245cmd
///het1cmd
/////////////

///[Example_1]////////////////////////////////////
public void Example_1()
{
  Ret = Qry("SELECT * FROM _History GREEP *5*");
  Print(Ret);
}  
///Result:///
///152486
///hc52gh
///mtc5j5
/////////////
 
