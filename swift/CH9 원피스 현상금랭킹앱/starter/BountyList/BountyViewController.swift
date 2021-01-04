//
//  BountyViewController.swift
//  BountyList
//
//  Created by 이성일 on 2020/04/09.
//  Copyright © 2020 com.sungil. All rights reserved.
//

import UIKit

class BountyViewController: UIViewController ,UITableViewDataSource,UITableViewDelegate{
    
    let nameList = ["brook", "chopper", "franky", "luffy", "nami", "robin", "sanji", "zoro"]
    let bountyList = [33000000, 50, 44000000, 300000000, 16000000, 80000000, 77000000, 120000000]
    
    override func prepare(for segue: UIStoryboardSegue, sender: Any?) {
        // DetailViewController 데이터 주께에요
        if segue.identifier == "showDetail"{
            let vc = segue.destination as? DetailViewController
            if let index = sender as? Int {
                           vc?.name = nameList[index]
                           vc?.bounty = bountyList[index]
            }
           
        }
    }

    override func viewDidLoad() {
        super.viewDidLoad()

        // Do any additional setup after loading the view.
    }
    func tableView(_ tableView: UITableView, numberOfRowsInSection section: Int) -> Int {
        return bountyList.count
    }
    
    func tableView(_ tableView: UITableView, cellForRowAt indexPath: IndexPath) -> UITableViewCell {
        
        guard let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath) as? ListCell else {
            return UITableViewCell()
        }
         let img = UIImage(named: "\(nameList[indexPath.row]).jpg")
                    cell.imgView.image = img
                    cell.nameLable.text = nameList[indexPath.row]
                    cell.bountyLable.text = "\(bountyList[indexPath.row])"
                    return cell
//        return cell
//        if let cell = tableView.dequeueReusableCell(withIdentifier: "cell", for: indexPath) as? ListCell {
//            let img = UIImage(named: "\(nameList[indexPath.row]).jpg")
//            cell.imgView.image = img
//            cell.nameLable.text = nameList[indexPath.row]
//            cell.bountyLable.text = "\(bountyList[indexPath.row])"
//            return cell
//        }else{
//            return UITableViewCell()
//        }
//
        
   }
    
    func tableView(_ tableView: UITableView, didSelectRowAt indexPath: IndexPath) {
        print("--> \(indexPath.row)")
        performSegue(withIdentifier: "showDetail", sender: indexPath.row)
    }

}

class ListCell: UITableViewCell {
    @IBOutlet weak var imgView: UIImageView!
    @IBOutlet weak var nameLable: UILabel!
    @IBOutlet weak var bountyLable: UILabel!
}
