function display()
{ 
  var year=document.getElementById("Year");
  var sem=document.getElementById("Semester");
  var a =parseInt(document.getElementById("Year").value);
  var b =parseInt(document.getElementById("Semester").value);  
  var c=(a*2)+b;
  console.log(document.getElementById("Year"));
  var res="<hr><h2>Subjects Taught in "+year.options[year.selectedIndex].text+ " Year " +sem.options[sem.selectedIndex].text+ " Semester</h2></br></br>";


var subjectlist = [ ["Engineering Mechanics","Introduction to C","Physics","Maths"],
                        ["Data Structures & Algorithms","Electrical Measurements","English","Digital Logic","Mathematics"],
                        ["Object Oriented programming","Computer Graphics","Computer Architecture","Database Management Systems"],
                        ["Software Engineering","Microprocessors","Computer Networks","Object Oriented Systems"],
                        ["Web Technologies I","Graph Theory","Principles of Compiler Design","Operating Systems"],
                        ["Web Technologies II","Cryptography & Network Security","Distributed Systems","Design & Analysis of Algorithm"],
                        ["Elective II","Elective III","Image Processing","Economics"],
                        ["Distributed System: Applications","Management","Elective IV","Digital Signal Processing"]
        ];
          
           res += '<ol>';
          for(var i =0;i<subjectlist[c].length;i++){
                      

                        res += '<li> <h4>'+ subjectlist[c][i] + '<h4></li>';
                }

                res+='</ol>'
                console.log(res);
document.getElementById("demo").innerHTML =res;
        
}
