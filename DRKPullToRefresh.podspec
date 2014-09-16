Pod::Spec.new do |s|
  s.name     = ‘DRKPullToRefresh'
  s.version  = ‘0.1.0’
  s.platform = :ios, '6.0'
  s.license  = 'MIT'
  s.summary  = 'Minimal & easily customizable pull-to-refresh control.'
  s.homepage = 'https://github.com/govi/DRKPullToRefresh'
  
  s.author   = { ‘Govi’ => ‘govirulez@gmail.com' }
  s.source   = { :git => 'https://github.com/govi/DRKPullToRefresh.git', :tag => s.version.to_s }

  s.description = 'DRKPullToRefresh is a pull to refresh component that used the SpinKit animations. The source is based on the excellent SVPullToRefresh and good looking KoaPullToRefresh'

  s.frameworks   = 'QuartzCore'
  
  s.source_files = ‘DRKPullToRefresh/*.{h,m}'
  s.public_header_files = ‘DRKPullToRefresh/*.h'
  s.dependency 'SpinKit', ‘~> 1.2.0'

  s.preserve_paths  = 'Demo'
  s.requires_arc = true
end
