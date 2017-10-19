
$(document).ready(function(){
    var power = 0 , ans ;
    var oper = "" ;
    $(".btn-info , .btn-success").click(function(){
      if( power === 10){
        if( oper === 0 || oper === "0" )
          {
              oper = "" ;
          }
        oper += $(this).html() ;
        $("#disp").html(oper) ; }
    }) ;
    $("#on").click(function( ){ 
        power = 10 ;
        $("#disp").html("0")
    });
    $("#off").click(function(){
        power = 0;
        oper = "" ;
        $("#disp").html(oper) ;
    });
    $("#res").click(function( ){
      if( power === 10)
        {oper = "0" ;
         $("#disp").html(oper) ; }
    });
    $("#calculate").click(function( ){
      if( power === 10)
       {
           oper = $("#disp").html( ) ;
           oper = oper.replace(/X/g, "*");
           oper = oper.replace(/÷/g, "/");
           oper = eval(oper);           
       } 
       $("#disp").html(oper) ;
    });
});