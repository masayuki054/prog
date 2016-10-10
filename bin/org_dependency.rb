#!/usr/bin/env ruby
# coding: utf-8
def org_dependency (file, prefix, depends)
  File.open(file, 'r:utf-8') do |io|
    io.read.each_line do |line| 
      if line =~ /^#\+include:\s*(\S+)/
        depends.push("#{prefix}/#{$1}")
        if File.dirname($1)!=""
          Dir.chdir(File.dirname($1)) do
            org_dependency(File.basename($1), prefix+"/"+File.dirname($1), depends)
          end
        end
      end
    end
  end
  depends
end

if __FILE__ == $0
  dirs = org_dependency(ARGV[0], ".", [])
  dirs = dirs.map do |f| f.sub("./", "") end
  puts dirs.join(", ")
end
