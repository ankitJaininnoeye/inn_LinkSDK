#
#  Be sure to run `pod spec lint inn_LinkSDK.podspec' to ensure this is a
#  valid spec and to remove all comments including this before submitting the spec.
#
#  To learn more about Podspec attributes see https://guides.cocoapods.org/syntax/podspec.html
#  To see working Podspecs in the CocoaPods repo see https://github.com/CocoaPods/Specs/
#

Pod::Spec.new do |spec|

  spec.name         = "inn_LinkSDK"
  spec.version      = "0.0.2"
  spec.summary      = "A short thisis a a firdt sjfksjfldj"

  spec.description  = <<-DESC
  This is description of Link IOS SDK file of ankir Jaib team.
                   DESC

  spec.homepage     = "http://EXAMPLE/inn_LinkSDK"
  
  spec.license      =  { :type => "MIT", :file => "license" }
  

  spec.author             = { "Ankit Jain" => "ankit.jain@innoeye.com" }
  

  

  spec.source       = { :git => "https://github.com/ankitJaininnoeye/inn_LinkSDK", :tag => "#{spec.version}" }

  #spec.source_files  = "Classes", "Classes/**/*.{h,m}"
  spec.exclude_files = "Classes/Exclude"
  spec.ios.deployment_target = '12.0'
  spec.ios.vendored_frameworks = 'NVIOSSDK.framework'
  spec.dependency 'RealmSwift', '~> 10.7.6'


end

