function getUnEsc (stkr) {
}

function saveNewHash(cRow){
  var ss = SpreadsheetApp.getActiveSpreadsheet();
  var sheet = ss.getActiveSheet();
  var actCell = sheet.getActiveCell();
  var curRow = actCell.getRow();
  
  if (typeof cRow == 'undefined') {
  } else {
    curRow  = cRow;
  }
  
  
    var vl = sheet.getRange( curRow, 2).getValue();
    //var oldHash = sheet.getRange(i, 3).getValue();
    var curHash = getCurrentHash(vl);
  
  sheet.getRange(curRow, 3).setValue(curHash);
  sheet.getRange(curRow, 2).clearFormat();
}

function checkAllRowsAndMail(){
  checkAllRows(true);
}

function checkAllRows(sndMl){
  if (typeof sndMl == 'undefined') {
    sndMl = false;
  }
  
  var ss = SpreadsheetApp.getActiveSpreadsheet();
  //var sheet = ss.getSheets()[0];

  //var ss = SpreadsheetApp.getActiveSpreadsheet();
  var sheet = ss.getActiveSheet();
    
  var lastClm = sheet.getLastColumn();
  var lastRow = sheet.getLastRow();
  
  var mess = "Есть новые предложения!<br/>";
  
  var isNew = false;
  
  for (var i = 2; i<= lastRow; i++){
    var vl = sheet.getRange(i, 2).getValue();
    var oldHash = sheet.getRange(i, 3).getValue();
    var curHash = getCurrentHash(vl);
    
    if ( oldHash != curHash){
      sheet.getRange(i, 2).setBackgroundColor("red");
      
      if (sndMl) {
        saveNewHash (i);        
      }
      //<a href="http://www.pandawillforum.com/" class="firefinder-match">Join PandawillForum</a>
      var m = "<a href='"+vl+"' >"+sheet.getRange(i, 1).getValue()+"</a><br/>";
      
      mess = mess + m;
      isNew = true;
    }
    
    //sheet.getRange(i, 3).setValue(curHash);
    
    //var 
    
    //Browser.msgBox(vl);
    //2index[values[0][i]] = i + firstClm;
  }
  
  if (typeof sndMl == 'undefined') {
    return;
  } else {
    if (sndMl && isNew)  {
      sndMail(mess);
    }
  }
}

function sndMail(mess){
  MailApp.sendEmail("info@aleksey-gorbunov.info","Есть новые предложения!","", {
    htmlBody : mess
  });
}

function getCurrentHash(url){
  var resp = UrlFetchApp.fetch(url);
  //Browser.msgBox(resp.getContentText());
  var contText = resp.getContentText();
  
  var sgn = Utilities.computeHmacSha256Signature(contText,"0",Utilities.Charset.UTF_8);
  return Utilities.base64Encode(sgn);
}

function TimerFunc(){
  
}


function onOpen() {
  var ss = SpreadsheetApp.getActiveSpreadsheet();
  var menuEntries = [ 
    {name: "Проверить все строки", functionName: "checkAllRows"},
    {name: "Отметить строку как проверенную", functionName: "saveNewHash"}
  ];
  ss.addMenu("Мои", menuEntries);
}
