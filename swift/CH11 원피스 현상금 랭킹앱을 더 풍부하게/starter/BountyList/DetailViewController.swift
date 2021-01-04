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

    @IBOutlet weak var nameLableCenterX: NSLayoutConstraint!
    
    @IBOutlet weak var bountyLableCenterX: NSLayoutConstraint!
    
    
    let viewModel = DetailViewModel()
    
    override func viewDidLoad() {
        super.viewDidLoad()
        updateUI()
        prepareAnimation()
    }
    
    override func viewDidAppear(_ animated: Bool) {
        super.viewDidAppear(animated)
        showAnimation()
        
        
    }
    
   private func prepareAnimation() {
//        nameLableCenterX.constant = view.bounds.width
//        bountyLableCenterX.constant = view.bounds.width
    
    nameLable.transform = CGAffineTransform (translationX: view.bounds.width, y: 0).scaledBy(x: 3, y: 3).rotated(by: 180)
    bountyLable.transform = CGAffineTransform (translationX: view.bounds.width, y: 0).scaledBy(x: 3, y: 3).rotated(by: 180)
    
    nameLable.alpha = 0
    bountyLable.alpha = 0
    
    }
    
  private  func showAnimation () {
    
//        nameLableCenterX.constant = 0
//        bountyLableCenterX.constant = 0
//
////    UIView.animate(withDuration: 0.3,
////                   delay: 0.1,
////                   options: .curveEaseIn,
////                   animations: {
////        self.view.layoutIfNeeded()
////    }, completion: nil)
//
//
//    UIView.animate(withDuration:0.5, delay: 0.2, usingSpringWithDamping: 0.6, initialSpringVelocity: 2, options: .allowUserInteraction, animations: {
//        self.view.layoutIfNeeded()
//    }, completion: nil)
//
//    UIView.transition(with: imgView, duration: 0.3, options: .transitionFlipFromLeft, animations: nil, completion: nil)
    

        UIView.animate(withDuration: 1, delay: 0, usingSpringWithDamping: 0.6, initialSpringVelocity: 2, options: .allowUserInteraction, animations: {
            self.nameLable.transform = CGAffineTransform.identity
            self.nameLable.alpha = 1
        }, completion: nil)
    UIView.animate(withDuration: 1, delay: 0.2, usingSpringWithDamping: 0.6, initialSpringVelocity: 2, options: .allowUserInteraction, animations: {
               self.bountyLable.transform = CGAffineTransform.identity
               self.bountyLable.alpha = 1
           }, completion: nil)
    
    UIView.transition(with: imgView, duration: 0.3, options: .transitionFlipFromLeft, animations: nil, completion: nil)
    
  
    
    
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
