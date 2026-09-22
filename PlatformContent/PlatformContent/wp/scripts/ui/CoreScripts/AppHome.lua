local CoreGui = Game:GetService("CoreGui")
local ContentProvider = Game:GetService("ContentProvider")
local GuiRoot = CoreGui:FindFirstChild("RobloxGui")
local Modules = GuiRoot:FindFirstChild("Modules")
local PlatformService = nil
pcall(function() PlatformService = game:GetService('PlatformService') end)

local Utility = require(Modules:FindFirstChild('Utility'))
local GlobalSettings = require(Modules:FindFirstChild('GlobalSettings'))
local CameraManager = require(Modules:FindFirstChild('CameraManager'))
local SoundManager = require(Modules:FindFirstChild('SoundManager'))

local AppHomeContainer = Utility.Create'Frame'
{
	Size = UDim2.new(1, 0, 1, 0);
	BackgroundTransparency = 0;
	BorderSizePixel = 0;
	BackgroundColor3 = Color3.new(0,0,0);
	Name = 'AppHomeContainer';
	Parent = GuiRoot;
}

local soundHandle = SoundManager:Play('BackgroundLoop', 0.33, true)
if soundHandle then
	local bgmLoopConn = nil
	bgmLoopConn = soundHandle.DidLoop:connect(function(soundId, loopCount)
		if loopCount >= 1 then
			bgmLoopConn = Utility.DisconnectEvent(bgmLoopConn)
			if soundHandle then
				SoundManager:TweenSound(soundHandle, 0.1, 3)
			end
		end
	end)
end

spawn(function()
	while true do
		local queueSize = ContentProvider.RequestQueueSize
		if queueSize == 0 then
			CameraManager:StartTransitionScreenEffect()
			CameraManager:EnableCameraControl()
			spawn(function()
				CameraManager:CameraMoveToAsync()
			end)
			AppHomeContainer.BackgroundTransparency = 1
			break
		end
		wait(0.01)
	end
end)