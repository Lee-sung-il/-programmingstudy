//
//  BountyInfo.swift
//  BountyList
//
//  Created by 이성일 on 2020/04/30.
//  Copyright © 2020 com.sungil. All rights reserved.
//

import UIKit


struct BountyInfo {
    let name:String
    let bounty: Int

    var image: UIImage? {
        return UIImage(named: "\(name).jpg")
    }
    
    init(name: String, bounty: Int) {
        
        self.name = name
        self.bounty = bounty
    }
}

