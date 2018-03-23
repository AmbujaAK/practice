function display() {
  var roll = document.getElementById('text').value;
  res = "";
  var students = [
    ["Ambuj Kumar","74","IT"],
    ["Ritwic Dhibar","51","IT"],
    ["Rahul Tiwari","49","IT"],
    ["Manisha Mandal","43","IT"],
    ["Deepa Kumari","80","IT"],
    ["Choden Lama","67","IT"],
    ["Payel Roy","2","IT"],
  ];
  var size = 7;
  //console.log(size);
  s_list = [];
  res += '<ul>';
  for (var i=0;i<students.length;i++){
    res += '<li> <h6> Name :'+ students[i][0] + '<h6></li>';
    res += '<li> <h6> Roll No. :'+ students[i][1] + '<h6></li>';
    res += '<li> <h6> Department :'+ students[i][2] + '<h6></li>';
    s_list.push(res);
    //s_list.push(students[i]);
  }
  res+='</ul>';
  console.log(s_list);
  for (var i=0;i<students.length;i++){
    if(students[i][1] == roll){
      document.getElementById('content').innerHTML = s_list[i];
      break;
    }
    else {
      document.getElementById('content').innerHTML = 'No Data Available';
    }
  }
}
