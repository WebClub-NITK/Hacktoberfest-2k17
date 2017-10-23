$(document).ready(function(){
    
    var str = "";
    var isOn = false;
    
    
    $("#start").click(function(){
        if(isOn)
        {
            str = "";
            $("#display").html(str);
            $(this).html("ON");
            
            $(this).addClass("btn-success");
            $(this).removeClass("btn-danger");
            isOn = false;
        }
        else
        {
            $("#display").html("Enter Query..");
            $(this).html("OFF");
            $(this).addClass("btn-danger");
            $(this).removeClass("btn-success");
            isOn = true;
        }
    });

    
    
    
        $(".entry").click(function(){
                if(isOn)
                {
                    str += $(this).html();
                    $("#display").html(str);
                }
        });


        $("#clear").click(function(){
            if(isOn)
            {
                str = "";
                $("#display").html("Enter Query..");
            }
    });


        $("#del").click(function(){
        
            if(isOn)
            {
                arr = str.split("");
                arr.pop();
                str = arr.join("");
                $("#display").html(str);
                if(str === "")
                {   
                    $("#display").html("Enter Query..");
                }
            }

        });

        $("#result").click(function(){
            str = str.replace("x", "*");
            str = eval(str).toString();
            $("#display").html(eval(str));
        });

    
});