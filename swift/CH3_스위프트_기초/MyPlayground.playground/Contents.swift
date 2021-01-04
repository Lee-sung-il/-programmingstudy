import UIKit

// --- comment

//var str = "Hello, playground"
//let value = arc4random_uniform(100)
//print("--> \(value)")

/*
 여기에 여러분이 하시고 싶은 말을
 길게 작성하셔서
 메시지를 남겨놓으시면 되겠습니다.
 */



// --- Tuple

let coordinates = (4,6)

let x = coordinates.0
let y = coordinates.1

let coordinatesName = (x : 2,y : 3)

let x2 = coordinatesName.x
let y2 = coordinatesName.y


let (x3,y3) = coordinatesName
x3
y3




// --- Boolean

let yes = true
let no = false

let isFourGreaterThanFive = 4 > 5

//if isFourGreaterThanFive{
//    print("---> 참")
//}else{
//    print("---> 거짓")
//}

//if 조건.....{
//        //조건이 참인경우에 수행하는 코드를 여기다가...
//    }else{
//        //그렇지 않은 경우에 코드는 여기다가...
//}

let a = 5
let b = 10

//if a > b{
//    print("---> a가 크다")
//}else{
//    print("---> b가 크다")
//}

let name1 = "Jin"
let name2 = "Jason"

let isTwoNameSame = name1 == name2

if isTwoNameSame{
    print("---> 이름이 같다")
}else{
     print("---> 이름이 다르다")
}




let isJason = name2 == "Jason"
let isMale = true

let JasonAndMale = isJason && isMale
let JasonOrMale = isJason || isMale



//let greatingMessage: String
//if isJason{
//    greatingMessage = "Hello jason"
//}else{
//    greatingMessage = "Hello Somebody"
//}
//print("Msg: \(greatingMessage)")


let greatingMessage: String = isJason ? "Hello jason" : "Hello Somebody"
print("Msg: \(greatingMessage)")



// --- Scope

var hours = 50
let payPerHour = 10000
var salary = 0

if hours > 40{
    let extraHours = hours - 40
    salary += extraHours * payPerHour * 2
    hours  -= extraHours
}

salary += hours * payPerHour

//      print(hours)

