-- Create a simple test place with a baseplate and spawn location
-- Run this in Roblox Studio and save as BasePlate.rbxl

-- Clear workspace
game.Workspace:ClearAllChildren()

-- Create a green baseplate
local baseplate = Instance.new("Part")
baseplate.Name = "Baseplate"
baseplate.Size = Vector3.new(512, 1, 512)
baseplate.Position = Vector3.new(0, -0.5, 0)
baseplate.BrickColor = BrickColor.new("Dark green")
baseplate.Material = Enum.Material.Grass
baseplate.Anchored = true
baseplate.Locked = true
baseplate.Parent = game.Workspace

-- Create a red spawn location
local spawn = Instance.new("SpawnLocation")
spawn.Name = "SpawnLocation"
spawn.Size = Vector3.new(6, 1, 6)
spawn.Position = Vector3.new(0, 0.5, 0)
spawn.BrickColor = BrickColor.new("Bright red")
spawn.Anchored = true
spawn.Parent = game.Workspace

-- Create a few colored cubes for visual testing
local colors = {
    {name = "Red Cube", color = "Bright red", pos = Vector3.new(10, 2, 0)},
    {name = "Blue Cube", color = "Bright blue", pos = Vector3.new(-10, 2, 0)},
    {name = "Green Cube", color = "Bright green", pos = Vector3.new(0, 2, 10)},
    {name = "Yellow Cube", color = "Bright yellow", pos = Vector3.new(0, 2, -10)},
}

for _, cubeData in ipairs(colors) do
    local cube = Instance.new("Part")
    cube.Name = cubeData.name
    cube.Size = Vector3.new(4, 4, 4)
    cube.Position = cubeData.pos
    cube.BrickColor = BrickColor.new(cubeData.color)
    cube.Anchored = true
    cube.Parent = game.Workspace
end

-- Create a Sky in Lighting
local sky = Instance.new("Sky")
sky.Name = "Sky"
sky.SkyboxBk = "rbxasset://textures/sky/sky512_bk.tex"
sky.SkyboxDn = "rbxasset://textures/sky/sky512_dn.tex"
sky.SkyboxFt = "rbxasset://textures/sky/sky512_ft.tex"
sky.SkyboxLf = "rbxasset://textures/sky/sky512_lf.tex"
sky.SkyboxRt = "rbxasset://textures/sky/sky512_rt.tex"
sky.SkyboxUp = "rbxasset://textures/sky/sky512_up.tex"
sky.Parent = game.Lighting

-- Set camera to look at the scene
local camera = game.Workspace.Camera
camera.CameraType = Enum.CameraType.Fixed
camera.CoordinateFrame = CFrame.new(Vector3.new(0, 20, 20), Vector3.new(0, 0, 0))
camera.Focus = CFrame.new(Vector3.new(0, 0, 0))

print("Test place created! Save this as BasePlate.rbxl")
print("Workspace children: " .. #game.Workspace:GetChildren())
print("Sky added to Lighting")
