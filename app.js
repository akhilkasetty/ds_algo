function myFunction() {
    var x = document.getElementById("frm1");
    var text = "";
    text += x.elements[0].value ;
    switch(text)
    {
        case "": alert("Your input is empty");
                 break;
        case '1':document.getElementById("demo").innerHTML = "January";
                  break;
        case '2':document.getElementById("demo").innerHTML = "Febraury";
                  break;
        case '3':document.getElementById("demo").innerHTML = "March";
                  break;
        case '4':document.getElementById("demo").innerHTML = "April";
                  break;
        case '5':document.getElementById("demo").innerHTML = "May";
                  break;
        case '6':document.getElementById("demo").innerHTML = "June";
                  break;
        case '7':document.getElementById("demo").innerHTML = "July";
                  break;
        case '8':document.getElementById("demo").innerHTML = "August";
                  break;
        case '9':document.getElementById("demo").innerHTML = "September";
                  break;
        case '10':document.getElementById("demo").innerHTML = "October";
                  break;
        case '11':document.getElementById("demo").innerHTML = "November";
                  break;
        case '12':document.getElementById("demo").innerHTML = "December";
                  break;
        default :alert("Inappropriate Input , enter again");
    }
}