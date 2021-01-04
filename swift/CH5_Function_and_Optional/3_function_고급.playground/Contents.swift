import UIKit

//func  functionName(externalName parmType : paramType) -> ReturnType {
//            //.....
//    return returnvalue
//}

func printTotalPrice(price: Int,count: Int){
    print(" Total price: \(price * count)")
}

func printTotalPrice(price: Double,count: Double){
    print(" Total price: \(price * count)")
}

func printTotalPrice(가격: Int,갯수: Int){
    print(" Total price: \(가격 * 갯수)")
}

// in-out paramater

var valaue = 3
func increamentAndPrint(_ value: inout Int){
    value += 1
    print(value)
}

increamentAndPrint(&valaue)


// --- Function as param

func add(_ a: Int, _ b: Int) -> Int {
    return a + b
}

func subtract(_ a: Int,_ b: Int) -> Int {
    return a - b
}






var function = add
function(4,2)
function = subtract
function(4,2)


func printResult(_ function:(Int,Int) -> Int ,_ a: Int , _ b: Int) {
    let result = function(a,b)
    print(result)
}


printResult(add,10,5)
printResult(subtract,10,5)

