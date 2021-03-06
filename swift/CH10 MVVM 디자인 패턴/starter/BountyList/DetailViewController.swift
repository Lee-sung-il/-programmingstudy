//
//  DetailViewController.swift
//  BountyList
//
//  Created by 이성일 on 2020/04/09.
//  Copyright © 2020 com.sungil. All rights reserved.
//

import UIKit

class DetailViewController: UIViewController {
    
    //    MVM
        
    //    Model
    //    - BountyInfo
    //    > BountyInfo 만들자
        
    //    View
    //    - imgView, nameLabel, bountylabel
    //    > view들은 viewModel를 통해서 구성되기?
    
        
    //     ViewModel
    //    - DetailViewModel
    //    > 뷰레이에서 필요한 메서드 만들기
    //    > 모델 가지고 있기 ,, BountyInfo 들
    
    @IBOutlet weak var imgView: UIImageView!
    @IBOutlet weak var nameLable: UILabel!
    @IBOutlet weak var bountyLable: UILabel!
    
    let viewModel = DetailViewModel()
    
    override func viewDidLoad() {
        super.viewDidLoad()

        updateUI()
    }
    
    func updateUI() {
        
        if let bountyInfo = viewModel.bountyInfo {
            
            imgView.image = bountyInfo.image
            nameLable.text = bountyInfo.name
            bountyLable.text = "\(bountyInfo.bounty)"
       
        }
        
    }

    @IBAction func close(_ sender: Any) {
        dismiss(animated: true, completion: nil)
    }
    
}

class DetailViewModel {
    
    var bountyInfo: BountyInfo?
    
    func update(model: BountyInfo?) {
        bountyInfo = model
    }
}
