import UIKit

var scoreDic: [String: Int] = ["jason": 80, "jay": 95, "jake": 90]
//var scoreDic: Dictionary<String,Int> = ["jason": 80, "jay": 95, "jake": 90]



if let score = scoreDic["jason"] {
    score
}else{
        //... score 없음
}
scoreDic["jay"]
scoreDic["jerry"]



//scoreDic = [:]
scoreDic.isEmpty
scoreDic.count


// 기존 사용자 업데이트
scoreDic["jason"] = 99
scoreDic

// 사용자 추가
scoreDic["jack"] = 100
scoreDic

// 사용자 제거
scoreDic["jack"] = nil
scoreDic



// for Loop
for (name,score) in scoreDic {
    print("\(name), \(score)")
}


for key in scoreDic.keys {
    print(key)
}


// 1 이름, 직업, 도시 에대해서 본의 딕셔너리 만들기
// 2 여기서 도시를 부산으로 업데이트 하기
// 3 딕셔너리를 받아서 이름과 도시 프린트하는 함수 만들기

var myDic: [String: String] = ["name": "sung il", "job": "student", "city": "Daegu"]

myDic["city"] = "Busan"
myDic

func printNameAndCity(dic: [String: String]) {
    if let name = dic["name"], let city = dic["city"] {
        print(name,city)
    }else{
        print("--> Cannot find")
    }
    
}

printNameAndCity(dic:myDic)


